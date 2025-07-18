#ifndef _ROLLER_REPLAY_H
#define _ROLLER_REPLAY_H
//-------------------------------------------------------------------------------------------------
#include "types.h"
//-------------------------------------------------------------------------------------------------

#define REPLAY_SPEED_MIN      -8192
#define REPLAY_SPEED_MAX      8192
#define REPLAY_NORMAL_SPEED   256

//-------------------------------------------------------------------------------------------------

extern int replayspeeds[9];
extern int replaysetspeed;
extern int replaydirection;
extern int lastfile;
extern int lastautocut;
extern int replayspeed;
extern int replayframes;
extern int currentreplayframe;
extern int lastreplayframe;
extern int introfiles;
extern char newrepsample[16];
extern char repsample[16];
extern int slowing;
extern int rewinding;
extern int forwarding;

//-------------------------------------------------------------------------------------------------;

void setreplaytrack();
int startreplay();
void stopreplay(int a1, int a2, int a3, int a4);
int DoReplayData(int a1, int a2, int a3, int a4);
void Rplay();
int Rreverseplay(int a1, unsigned int a2, int a3, unsigned int a4);
int Rframeplus(int a1, int a2);
int Rframeminus(int a1, int a2);
int Rspeedplus(int result, unsigned int a2, unsigned int a3);
void Rspeedminus(int64 a1);
int DoRstop(int a1, int a2);
int Rstop();
int Rrewindstart(int a1, int a2);
int Rforwardstart(int a1, int a2);
void ROldStatus();
int Rstart(int a1, unsigned int a2, int a3, unsigned int a4);
int Rend(int a1, unsigned int a2, int a3, unsigned int a4);
unsigned int readdisable(int a1);
int cleardisable(int result);
int setdisable(int result);
int deleteframes(int result, int a2);
int undeleteframes(int result, int a2);
void findnextvalid();
unsigned int findlastvalid();
void Rassemble();
void storecut();
int removecut();
int readcut();
int displayreplay();
int compare(int a1, int a2);
int warning(int a1, int a2, int a3, int a4, char *a5);
char lsd(int a1, int a2, int a3, int a4);
int scandirectory(int a1);
char fileselect(int a1, int a2, int a3, int a4, int a5, int a6, char *a7, int a8, int a9);
int previouscut(int a1, int a2);
int nextcut(int a1, int a2);
int loadreplay();
int savereplay();
int deletereplay(int a1, int a2, int a3, int a4);
char updatedirectory();
void findintrofiles();
int displaycontrolpanel();
int rtoggleedit(int a1, unsigned int a2, int a3, unsigned int a4);
int rstartblock(int a1, unsigned int a2, int a3, unsigned int a4);
void rselectblock();
int rdeleteblock(int64 a1);
int rstoreview(int a1, unsigned int a2, int a3, unsigned int a4);
int rremoveview(int a1, unsigned int a2, int a3, unsigned int a4);
int rpreviouscut(int result, unsigned int a2, int a3, unsigned int a4);
int rnextcut(int result, unsigned int a2, int a3, unsigned int a4);
void rstartassemble(int64 a1);
uint8 *replayicon(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
int replaypanelletter(int result, int *a2, int *a3, int a4);
int replaypanelstring(const char *a1, int a2, int a3, int a4);
int displaypaneltime(int a1, int a2, int a3, int a4);
int discmenu(int a1, unsigned int a2, int a3, unsigned int a4);
void initsoundlag(uint32 uiTicks);
void resetsmoke();

//-------------------------------------------------------------------------------------------------
#endif
