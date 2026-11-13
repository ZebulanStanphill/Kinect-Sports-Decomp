/* Static initialiser of a Havok global: an hkUFloat8 member set from 1.0f through
   hkUFloat8::operator= (fn_82CE5458, see func_82D8B4B8.cpp), then a float limit. */
typedef struct Global_83183E64 {
    char pad[0xc];
    unsigned char uf8;
    char pad0d[3];
    float limit;
} Global_83183E64;

extern void fn_82CE5458(unsigned char *self, const float *f);
extern Global_83183E64 lbl_83183E64;

void fn_831323F0(void)
{
    float one = 1.0f;
    fn_82CE5458(&lbl_83183E64.uf8, &one);
    lbl_83183E64.limit = 3.40282002e+38f;
}
