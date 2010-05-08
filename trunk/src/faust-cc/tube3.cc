namespace tube3 {
// generated from file '../src/faust/tube3.dsp'

FAUSTFLOAT 	fslider0;
FAUSTFLOAT 	fslider1;
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
}

void compute(int count, float *input0, float *input1, float *output0, float *output1)
{
	float 	fSlow0 = faustpower<3>((0 - fslider0));
	float 	fSlow1 = powf(10,fslider1);
	float 	fSlow2 = (fSlow1 * (0 - fSlow0));
	float 	fSlow3 = max(-600, fSlow2);
	float 	fSlow4 = (0 - fSlow3);
	float 	fSlow5 = ((int((fabsf(fSlow2) > 0.0001f)))?((int((fSlow3 < -50)))?(expf(fSlow3) * fSlow4):(fSlow3 / (1 - expf(fSlow4)))):(1 + (fSlow2 * (0.5f + (0.08333333333333333f * fSlow2)))));
	float 	fSlow6 = (0.08333333333333333f * fSlow1);
	float 	fSlow7 = (1.0f / fSlow1);
	for (int i=0; i<count; i++) {
		float fTemp0 = ((float)input0[i] - fSlow0);
		float fTemp1 = (fSlow1 * fTemp0);
		float fTemp2 = max(-600, fTemp1);
		float fTemp3 = (0 - fTemp2);
		float fTemp4 = (0 - (fSlow0 + (fSlow7 * (((int((fabsf(fTemp1) > 0.0001f)))?((int((fTemp2 < -50)))?(expf(fTemp2) * fTemp3):(fTemp2 / (1 - expf(fTemp3)))):(1 + (fSlow1 * (fTemp0 * (0.5f + (fSlow6 * fTemp0)))))) - fSlow5))));
		float fTemp5 = (fSlow1 * fTemp4);
		float fTemp6 = max(-600, fTemp5);
		float fTemp7 = (0 - fTemp6);
		output0[i] = (FAUSTFLOAT)(0 - (fSlow7 * (((int((fabsf(fTemp5) > 0.0001f)))?((int((fTemp6 < -50)))?(expf(fTemp6) * fTemp7):(fTemp6 / (1 - expf(fTemp7)))):(1 + (fSlow1 * (fTemp4 * (0.5f + (fSlow6 * fTemp4)))))) - fSlow5)));
		float fTemp8 = ((float)input1[i] - fSlow0);
		float fTemp9 = (fSlow1 * fTemp8);
		float fTemp10 = max(-600, fTemp9);
		float fTemp11 = (0 - fTemp10);
		float fTemp12 = (0 - (fSlow0 + (fSlow7 * (((int((fabsf(fTemp9) > 0.0001f)))?((int((fTemp10 < -50)))?(expf(fTemp10) * fTemp11):(fTemp10 / (1 - expf(fTemp11)))):(1 + (fSlow1 * (fTemp8 * (0.5f + (fSlow6 * fTemp8)))))) - fSlow5))));
		float fTemp13 = (fSlow1 * fTemp12);
		float fTemp14 = max(-600, fTemp13);
		float fTemp15 = (0 - fTemp14);
		output1[i] = (FAUSTFLOAT)(0 - (fSlow7 * (((int((fabsf(fTemp13) > 0.0001f)))?((int((fTemp14 < -50)))?(expf(fTemp14) * fTemp15):(fTemp14 / (1 - expf(fTemp15)))):(1 + (fSlow1 * (fTemp12 * (0.5f + (fSlow6 * fTemp12)))))) - fSlow5)));
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerVar("tube3.dist","","S","",&fslider1, 0.0f, 0.0f, 2.0f, 0.01f);
	registerVar("tube3.q","","S","",&fslider0, 0.0f, 0.5f, 2.0f, 0.01f);
	registerInit(init);
}

} // end namespace tube3
