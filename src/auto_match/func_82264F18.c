typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82264F18(int showingPauseMenu, int isCalibrating, int trackSkeletons,
                 __vector4 hipCenter, __vector4 spine, __vector4 shoulderCenter, __vector4 head,
                 __vector4 shoulderLeft, __vector4 elbowLeft, __vector4 wristLeft, __vector4 handLeft,
                 __vector4 shoulderRight, __vector4 elbowRight, __vector4 wristRight, __vector4 handRight,
                 __vector4 hipLeft, __vector4 kneeLeft, __vector4 ankleLeft, __vector4 footLeft,
                 __vector4 hipRight, __vector4 kneeRight, __vector4 ankleRight, __vector4 footRight)
{
  char *p = fn_8225F670();
  if (*p != 0) {
    if (fn_8225FDE0(0x63, 1) == 0 && fn_82E1CAD0(0x63) != 0) {
      fn_82E1CB88("ShowingPauseMenu", showingPauseMenu);
      fn_82E1CB88("IsCalibrating", isCalibrating);
      fn_82E1CB88("TrackSkeletons", trackSkeletons);
      fn_8225FCE8("00_HipCenter", hipCenter);
      fn_8225FCE8("01_Spine", spine);
      fn_8225FCE8("02_ShoulderCenter", shoulderCenter);
      fn_8225FCE8("03_Head", head);
      fn_8225FCE8("04_ShoulderLeft", shoulderLeft);
      fn_8225FCE8("05_ElbowLeft", elbowLeft);
      fn_8225FCE8("06_WristLeft", wristLeft);
      fn_8225FCE8("07_HandLeft", handLeft);
      fn_8225FCE8("08_ShoulderRight", shoulderRight);
      fn_8225FCE8("09_ElbowRight", elbowRight);
      fn_8225FCE8("10_WristRight", wristRight);
      fn_8225FCE8("11_HandRight", handRight);
      fn_8225FCE8("12_HipLeft", hipLeft);
      fn_8225FCE8("13_KneeLeft", kneeLeft);
      fn_8225FCE8("14_AnkleLeft", ankleLeft);
      fn_8225FCE8("15_FootLeft", footLeft);
      fn_8225FCE8("16_HipRight", hipRight);
      fn_8225FCE8("17_KneeRight", kneeRight);
      fn_8225FCE8("18_AnkleRight", ankleRight);
      fn_8225FCE8("19_FootRight", footRight);
      fn_82E1CCA8();
    }
  }
}
