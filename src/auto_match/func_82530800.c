extern int fn_82531688();
extern int fn_825316F0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821956B8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83296B94;
extern unsigned int lbl_83296B98;
extern unsigned int lbl_83296BA8;


double fn_82530800(void)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (lbl_83296BA8 == 0) {
    dVar2 = (double)fn_82531688();
    dVar4 = (double)(float)((double)lbl_8218E8FC / dVar2);
    dVar3 = (double)fn_825316F0();
    dVar2 = (double)lbl_82192604;
  }
  else {
    if (lbl_83296BA8 != 1) {
      if (lbl_83296BA8 < 3) {
        dVar2 = (double)fn_82531688();
        dVar4 = (double)(float)((double)lbl_821956B8 / dVar2);
        dVar3 = (double)fn_825316F0();
        dVar2 = (double)lbl_821CA460;
        goto LAB_825308cc;
      }
      if (lbl_83296BA8 == 3) {
        fVar1 = (float)lbl_83296B94 / (float)lbl_83296B98;
        goto LAB_825308d4;
      }
    }
    dVar2 = (double)fn_82531688();
    dVar4 = (double)(float)((double)lbl_821956B4 / dVar2);
    dVar3 = (double)fn_825316F0();
    dVar2 = (double)lbl_82193B38;
  }
LAB_825308cc:
  fVar1 = (float)(dVar4 / (double)(float)(dVar2 / dVar3));
LAB_825308d4:
  return (double)fVar1;
}

