extern void fn_824DF3E0(void *);
extern void fn_824DF2E8(void *, float);
void fn_824E0B70(char *self, char *other, float value) {
 *(float *)(self+0x24) = value + *(float *)(self+0x24);
 fn_824DF3E0(self+8);
 fn_824DF2E8(self+8, *(float *)(other+0xb4));
}
