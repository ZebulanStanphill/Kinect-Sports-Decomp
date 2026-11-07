extern unsigned int lbl_83264308;
extern void fn_8304EDB8(int,int,int,int);
typedef struct Params_8304EEA0 { int start; float time; int value; int field; } Params_8304EEA0;
extern void fn_83013E80(unsigned int,int,Params_8304EEA0 *,int);
void fn_8304EEA0(int context,int object,float time,int start,int length,int value) {
  Params_8304EEA0 p;
  fn_8304EDB8(context,object,start,start+length);
  if (*(unsigned int *)(object+8)&0x10000) {
    p.field=*(int *)(*(int *)(object+0x6c)+0x20);
    p.time=time;
    p.start=start;
    p.value=value;
    fn_83013E80(lbl_83264308,*(int *)(object+0x50),&p,context);
  }
}
