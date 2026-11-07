struct S {
    int pad, active;
    char gap[44];
    unsigned a;
    int b;
    char gap2[4];
    float scale, result;
    int start;
    void update(int v);
};
extern "C" char *lbl_832642E4;
extern "C" int fn_8301B4D8(void *self, S *p) {
    int result=0x27;
    if(p->active==2) {
        result=1;
        p->update(*(int *)(lbl_832642E4+0x90));
    }
    return result;
}
