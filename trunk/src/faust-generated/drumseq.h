// generated from file '../src/faust/drumseq.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#define FAUSTFLOAT float

namespace drumseq {

class Dsp {
private:
	int fSampleRate;
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT	*fCheckbox0_;
	double fConst0;
	double fConst3;
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT	*fCheckbox1_;
	double fVec0[2];
	int iVec1[2];
	double fConst4;
	double fRec2[2];
	int iRec0[2];
	double fConst5;
	double fConst6;
	double fRec1[2];
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst11;
	double fConst12;
	double fRec7[2];
	double fRec8[2];
	double fConst13;
	double fRec9[2];
	double fRec5[2];
	double fRec6[2];
	double fRec4[2];
	double fConst14;
	double fConst15;
	double fRec3[3];
	double fConst16;
	double fRec12[2];
	int iRec10[2];
	double fConst17;
	double fConst18;
	double fConst19;
	double fRec11[2];
	double fConst20;
	double fConst21;
	double fRec15[2];
	double fConst24;
	double fConst26;
	double fConst28;
	int iRec18[2];
	double fVec2[2];
	double fConst29;
	double fConst30;
	double fRec17[2];
	double fConst31;
	double fConst32;
	double fRec16[3];
	double fConst33;
	double fVec3[2];
	double fRec14[2];
	double fRec13[3];
	FAUSTFLOAT fVslider0;
	double fRec19[2];
	FAUSTFLOAT fCheckbox2;
	FAUSTFLOAT	*fCheckbox2_;
	double fVec4[2];
	double fRec22[2];
	int iRec20[2];
	double fRec21[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec25[2];
	double fConst34;
	double fRec27[2];
	double fRec28[2];
	double fRec23[2];
	double fRec24[2];
	double fConst35;
	double fRec29[2];
	double fRec30[2];
	double fRec31[2];
	double fRec32[2];
	int iRec33[2];
	double fConst36;
	double fRec34[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec35[2];
	FAUSTFLOAT fCheckbox3;
	FAUSTFLOAT	*fCheckbox3_;
	double fVec5[2];
	double fRec38[2];
	int iRec36[2];
	double fConst37;
	double fRec37[2];
	double fConst38;
	double fConst40;
	double fConst41;
	double fRec42[2];
	double fRec43[2];
	double fConst42;
	double fRec44[2];
	double fVec6[2];
	int IOTA;
	double fVec7[64];
	double fConst45;
	int iConst46;
	double fConst47;
	int iConst48;
	double fRec40[2];
	double fRec41[2];
	double fConst49;
	double fConst51;
	double fConst52;
	double fRec47[2];
	double fRec48[2];
	double fRec45[2];
	double fRec46[2];
	double fConst53;
	double fConst55;
	double fConst56;
	double fRec51[2];
	double fRec52[2];
	double fRec49[2];
	double fRec50[2];
	double fConst57;
	double fConst59;
	double fConst60;
	double fRec55[2];
	double fRec56[2];
	double fRec53[2];
	double fRec54[2];
	double fVec8[2];
	double fConst61;
	double fConst62;
	double fRec57[2];
	double fRec39[3];
	int iRec58[2];
	double fRec59[2];
	double fRec62[2];
	double fRec61[2];
	double fRec60[3];
	FAUSTFLOAT fVslider3;
	double fRec63[2];
	FAUSTFLOAT fCheckbox4;
	FAUSTFLOAT	*fCheckbox4_;
	double fVec9[2];
	double fConst63;
	double fRec66[2];
	int iRec64[2];
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec65[2];
	double fConst68;
	double fConst69;
	double fRec67[2];
	double fRec68[2];
	int iRec69[2];
	double fConst70;
	double fRec70[2];
	double fConst72;
	double fConst73;
	double fRec71[2];
	double fRec72[2];
	double fConst76;
	int iRec73[2];
	double fConst77;
	double fRec74[2];
	double fConst78;
	double fConst79;
	double fRec76[2];
	double fConst80;
	double fConst81;
	double fRec75[3];
	double fConst84;
	int iRec77[2];
	double fConst85;
	double fRec78[2];
	double fConst87;
	double fConst89;
	double fConst90;
	double fConst91;
	double fRec80[2];
	double fConst92;
	double fConst93;
	double fRec79[3];
	double fConst94;
	FAUSTFLOAT fVslider4;
	double fRec81[2];
	FAUSTFLOAT fVslider5;
	double fRec82[2];


public:
	void clear_state_f();
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);
	Dsp();
	~Dsp();
};

} // end namespace drumseq
