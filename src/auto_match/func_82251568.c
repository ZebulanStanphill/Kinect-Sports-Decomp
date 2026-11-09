typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
void fn_82251568(int object, long long value) {
 int first;
 __vector4 second;
 int *base = (int *)(object + 0x50);
 int *receiver;
 receiver=(int *)base[6];
 (*(void (**)(int *,long long,void *))(*(int *)receiver+0x14))(receiver,value,&first);
 receiver=(int *)base[8];
 (*(void (**)(int *,long long,void *))(*(int *)receiver+0x14))(receiver,value,&second);
 if (*(int **)(base+4)!=0) {
  (*(void (**)(int *,int,__vector4))(*(int *)*(int **)(base+4)+4))(*(int **)(base+4),first,second);
 }
}
