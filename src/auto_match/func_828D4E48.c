typedef struct Obj_828D4E48 {
    void *vt;
    int f4;
    unsigned short h[21];
} Obj_828D4E48;

extern char lbl_82024D24[];

void fn_828D4E48(int a, int b)
{
    Obj_828D4E48 tmp;
    int i;

    tmp.f4 = *(int *)(a + 4);
    tmp.vt = lbl_82024D24;
    for (i = 0; i < 21; i++) {
        tmp.h[i] = ((unsigned short *)(a + 8))[i];
    }

    *(int *)(a + 4) = *(int *)(b + 4);
    for (i = 0; i < 42; i++) {
        *(unsigned char *)(a + 8 + i) = *(unsigned char *)(b + 8 + i);
    }

    *(int *)(b + 4) = tmp.f4;
    for (i = 0; i < 42; i++) {
        *(unsigned char *)(b + 8 + i) = *(unsigned char *)((int)tmp.h + i);
    }
}
