typedef struct Mat_827F74C8 { float m[4][4]; } Mat_827F74C8;
typedef struct Self_827F74C8 { int pad[3]; Mat_827F74C8 *mats; } Self_827F74C8;

extern unsigned short fn_827F7210(Self_827F74C8 *self);
extern void XMemSet(void *dst, int c, unsigned int n);

void fn_827F74C8(Self_827F74C8 *self)
{
    unsigned int n = fn_827F7210(self);
    Mat_827F74C8 *mats = self->mats;
    unsigned int i;

    XMemSet(mats, 0, n * sizeof(Mat_827F74C8));
    for (i = 0; i < n; i++) {
        mats[i].m[0][0] = 1.0f;
        mats[i].m[1][1] = 1.0f;
        mats[i].m[2][2] = 1.0f;
        mats[i].m[3][3] = 1.0f;
    }
}
