typedef struct Owner_823266D0 Owner_823266D0;

typedef struct OwnerVector_823266D0 {
    Owner_823266D0 **first; /* 0x0 */
    Owner_823266D0 **last;  /* 0x4 */
    Owner_823266D0 **end;   /* 0x8 */
} OwnerVector_823266D0;

typedef struct Game_823266D0 {
    char pad0[0x24];
    void *scene; /* 0x24 */
} Game_823266D0;

typedef struct Self_823266D0 {
    char pad0[0x80];
    Game_823266D0 *game; /* 0x80 */
    char pad84[0xc0 - 0x84];
    float maximumA; /* 0xc0 */
    float maximumB; /* 0xc4 */
    float minimum;  /* 0xc8 */
} Self_823266D0;

extern const char *lbl_831DA168[3];
extern const char *lbl_831DA174[3];
extern Owner_823266D0 *fn_82560010(void *scene, const char *name);
extern void fn_8255FD70(OwnerVector_823266D0 *out, void *scene, const char *name);
extern float fn_82326810(Owner_823266D0 *owner);
extern void fn_8265CA20(void *p);
double __fsel(double a, double b, double c);

void fn_823266D0(Self_823266D0 *self)
{
    const char **name;
    Owner_823266D0 **first;
    Owner_823266D0 **last;
    Owner_823266D0 **it;

    for (name = lbl_831DA168; name != lbl_831DA168 + 3; name++) {
        Owner_823266D0 *owner = fn_82560010(self->game->scene, *name);
        float current = self->maximumA;
        double difference = current - fn_82326810(owner);
        self->maximumA = (float)__fsel(difference, current, fn_82326810(owner));
    }
    for (name = lbl_831DA174; name != lbl_831DA174 + 3; name++) {
        Owner_823266D0 *owner = fn_82560010(self->game->scene, *name);
        float current = self->maximumB;
        double difference = current - fn_82326810(owner);
        self->maximumB = (float)__fsel(difference, current, fn_82326810(owner));
    }
    {
        OwnerVector_823266D0 owners;
        fn_8255FD70(&owners, self->game->scene, "pointsdecision");
        first = owners.first;
        last = owners.last;
    }
    for (it = first; it != last; it++) {
        Owner_823266D0 *owner = *it;
        double difference = self->minimum - fn_82326810(owner);
        self->minimum = (float)__fsel(difference, fn_82326810(owner), self->minimum);
    }
    if (first != 0) {
        fn_8265CA20(first);
    }
}
