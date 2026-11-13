typedef struct Obj_8246C658 {
    int f0;
    int key;
    char pad8[0x20];
    int goToPhotos;
    float time;
    int resultsCount;
} Obj_8246C658;

extern unsigned int fn_828647D8(int *key);

int fn_8246C658(Obj_8246C658 *self, unsigned int id, const unsigned char *p)
{
    const unsigned char *q;
    unsigned char c;
    unsigned char b;

    if (fn_828647D8(&self->key) == id) {
        q = p;
        c = *p;
        b = 0x47;
        if (c == 0x47) {
            int d = (int)"Go To Photo Highlights" - (int)p;
            do {
                q++;
                if (c == 0) goto match1;
                b = q[d];
                c = *q;
            } while (c == b);
        }
        if (c - b == 0) {
match1:
            self->goToPhotos = 1;
            return 0;
        }
        q = p;
        c = *p;
        b = 0x52;
        if (c == 0x52) {
            int d = (int)"Results" - (int)p;
            do {
                q++;
                if (c == 0) goto match2;
                b = q[d];
                c = *q;
            } while (c == b);
        }
        if (c - b != 0) {
            q = p;
            c = *p;
            b = 0x52;
            if (c == 0x52) {
                int d = (int)"Results " - (int)p;
                do {
                    q++;
                    if (c == 0) goto match2;
                    b = q[d];
                    c = *q;
                } while (c == b);
            }
            if (c - b != 0)
                return 0;
        }
match2:
        self->resultsCount++;
        self->time = 0.0f;
    }
    return 0;
}
