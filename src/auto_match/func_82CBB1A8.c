extern int fn_82CBA950();
extern int fn_82CBAB88();
extern int fn_82CBADA8();
extern int fn_82CBB088();


void fn_82CBB1A8(void)

{
  int in_r7;
  int in_r8;
  
  if (in_r7 == 0) {
    if (in_r8 == 0) {
      fn_82CBB088();
    }
    else {
      fn_82CBA950();
    }
  }
  else if (in_r8 == 0) {
    fn_82CBAB88();
  }
  else {
    fn_82CBADA8();
  }
  return;
}

