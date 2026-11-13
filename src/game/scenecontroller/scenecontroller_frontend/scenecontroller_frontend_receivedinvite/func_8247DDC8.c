extern int fn_82230300();
extern int fn_8247DD58();
extern int fn_8247E368();
extern int fn_8265CA20();
extern unsigned int lbl_821BD718;
extern unsigned int lbl_821C2CCC;
extern void (*lbl_83276774[])(const char *, const char *, int);


void fn_8247DDC8(unsigned int *param_1)

{
  *param_1 = &lbl_821BD718;
  if (lbl_83276774[2]) {
    lbl_83276774[2]("olympus::invite::SceneControllerReceivedInvite::~SceneControllerReceivedInvite","D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\scenecontroller\\scenecontroller_frontend\\scenecontroller_frontend_receivedinvite.cpp",0x56);
  }
  fn_8247DD58(param_1 + 0x12);
  fn_8247E368(param_1 + 10);
  fn_8265CA20(param_1[10]);
  param_1[10] = 0;
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

