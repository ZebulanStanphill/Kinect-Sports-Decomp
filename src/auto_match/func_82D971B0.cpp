extern "C" { extern unsigned char *fn_82CE6150(void *, void *, float); extern float lbl_82006848; }
struct Result_82D971B0 { unsigned char v; Result_82D971B0(unsigned char x) : v(x) {} };
extern "C" Result_82D971B0 fn_82D971B0(char *p) {
 unsigned char a,b; float f=lbl_82006848;
 return Result_82D971B0(*fn_82CE6150(&a,p+0x20,f) && *fn_82CE6150(&b,p+0x60,f) && *(float *)(p+0xc8)<=*(float *)(p+0xcc));
}
