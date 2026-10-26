// Initializes the network wrapper and registers its message descriptors.
struct System_828A50E0 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual unsigned __int64 vf10(); };
extern "C" {
System_828A50E0 *fn_825089A0();
void fn_82F65320(unsigned int);
void fn_8251C390(void *,const char *,int);
unsigned int fn_828849E8();
void fn_829E53B0(void *);
void fn_8288A398();
void fn_828A4C10(void *);
void fn_828CF370(void *);
void fn_8288DEF0(unsigned int);
void fn_828A4660(void *,float);
void fn_828C36B0(void *,unsigned int,void *);
void fn_828C37F0(void *,void *,int,void *);
void fn_828BCB88(void *,unsigned int,int,void *);
char lbl_83159BEC[];
char lbl_83159C08[];
char lbl_83159C24[];
char lbl_83159C40[];
char lbl_83159C5C[];
char lbl_83159C78[];
char lbl_83159C94[];
char lbl_83159CB0[];
char lbl_83159CCC[];
char lbl_83159CE8[];
char lbl_83159D04[];
char lbl_83159D20[];
char lbl_83159D3C[];
char lbl_83159D58[];
char lbl_83159D74[];
}
extern "C" void fn_828A50E0(char *param_1)

{
  unsigned int uVar2;
  unsigned char auStack_30 [24];
  
  if (*(unsigned char *)(param_1 + 0x34) != '\x01') {
    uVar2 = fn_825089A0()->vf10();
    fn_82F65320(uVar2);
    *(unsigned char *)(param_1 + 0x34) = 1;
    fn_8251C390(auStack_30,".\\NetworkWrapperClass.cpp",0xe0);
    uVar2 = fn_828849E8();
    *(unsigned int *)(param_1 + 8) = uVar2;
    fn_829E53B0(auStack_30);
    fn_8288A398();
    fn_828A4C10(param_1);
    fn_828CF370(param_1);
    fn_8288DEF0(*(unsigned int *)(param_1 + 0x300));
    fn_828A4660(param_1,0.1f);
    fn_828C36B0(param_1,0x800b,lbl_83159BEC);
    fn_828C36B0(param_1,0x800a,lbl_83159C08);
    fn_828C37F0(param_1,lbl_83159C08,0,lbl_83159C24);
    fn_828C37F0(param_1,lbl_83159C08,1,lbl_83159C40);
    fn_828BCB88(param_1,0x40008109,4,lbl_83159C5C);
    fn_828BCB88(param_1,0x40008002,4,lbl_83159C78);
    fn_828BCB88(param_1,0x20008108,2,lbl_83159C94);
    fn_828BCB88(param_1,0x20008107,2,lbl_83159CB0);
    fn_828BCB88(param_1,0x30008106,3,lbl_83159CCC);
    fn_828BCB88(param_1,0x30008105,3,lbl_83159CE8);
    fn_828BCB88(param_1,0x50008104,5,lbl_83159D04);
    fn_828BCB88(param_1,0x10008103,1,lbl_83159D20);
    fn_828BCB88(param_1,0x10008102,1,lbl_83159D3C);
    fn_828BCB88(param_1,0x10008101,1,lbl_83159D58);
    fn_828BCB88(param_1,0x20008003,2,lbl_83159D74);
  }
  return;
}

