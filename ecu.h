// ecu.h 
/*
| Code released into public domain, no attribution required
*/

#ifndef __ECU_H_
#define __ECU_H_

#ifdef __cplusplus
extern "C" {
#endif


struct ecuPar {

    unsigned int CALRAM_SIZE;

    unsigned int cycleTime;

    double period;
    double offset1, offset2, offset3, offset4, offset5, offset6;
    double phase1, phase2, phase3, phase4, phase5, phase6;
    double ampl1, ampl2, ampl3, ampl4, ampl5, ampl6;

    unsigned char map1_8_8[8][8];

    unsigned char curve1_32[32];
};


extern volatile struct ecuPar ecuPar;

extern uint16_t gXcpEvent_EcuCyclic;


extern void ecuInit();
extern void ecuCreateA2lDescription();

void* ecuTask(void* p);

#ifdef __cplusplus
}
#endif

#endif
