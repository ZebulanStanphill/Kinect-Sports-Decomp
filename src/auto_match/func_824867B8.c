typedef struct Game_824867B8 {
    char pad0[0x8];
    unsigned int f8;
    int fc;
    char pad10[0x5c - 0x10];
    int f5c;
    char pad60[0x64 - 0x60];
    int f64;
} Game_824867B8;

typedef struct Self_824867B8 {
    char pad0[0x234];
    unsigned char name[1];
} Self_824867B8;

extern Game_824867B8 *fn_8225F160(void);
int fn_824867B8(Self_824867B8 *self)
{
    const unsigned char *p;
    const unsigned char *q;
    unsigned char c;
    unsigned char b;
    Game_824867B8 *game;

    game = fn_8225F160();
    if (game->f8 >= 2) {
        if (game->f8 == 2) {
            if (fn_8225F160()->f5c > 1) {
                return 3;
            }
        }
        return 2;
    } else {
        if (fn_8225F160()->fc == 1) {
            if (fn_8225F160()->f5c > 1) {
                return 3;
            }
            return 2;
        }
        if (fn_8225F160()->fc == 2) {
            if (fn_8225F160()->f64 <= 1) {
                return 2;
            }
            p = self->name;
            q = self->name;
            c = *q;
            b = 0x61;
            if (c == 0x61) {
                int d = (int)"athletics_mini5" - (int)p;
                do {
                    q++;
                    if (c == 0) goto mini;
                    b = q[d];
                    c = *q;
                } while (c == b);
            }
            if (c - b == 0) goto mini;
            q = self->name;
            c = *q;
            b = 0x61;
            if (c == 0x61) {
                int d = (int)"athletics_mini4" - (int)p;
                do {
                    q++;
                    if (c == 0) goto mini;
                    b = q[d];
                    c = *q;
                } while (c == b);
            }
            if (c - b == 0) goto mini;
            q = self->name;
            c = *q;
            b = 0x61;
            if (c == 0x61) {
                int d = (int)"athletics_mini3" - (int)p;
                do {
                    q++;
                    if (c == 0) goto mini;
                    b = q[d];
                    c = *q;
                } while (c == b);
            }
            if (c - b == 0) goto mini;
            return 4;
mini:
            return 3;
        }
        if (fn_8225F160()->fc == 5 && fn_8225F160()->f64 <= 1) {
            return 2;
        }
        return 4;
    }
}
