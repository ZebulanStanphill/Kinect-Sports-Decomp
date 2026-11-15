typedef struct Owner_824E94F0 {
    char pad00[0x14];
    void *values; /* 0x14 */
} Owner_824E94F0;

extern void fn_82837D98(void *, unsigned int, void **);
extern void fn_824E9078(float, float, float, float, void *, void *, void *, void *);

void fn_824E94F0(float left, float top, float right, float bottom, Owner_824E94F0 *owner, void *first,
                 void *second, void *third)
{
    void *value;
    fn_82837D98(owner->values, 0, &value);
    fn_824E9078(left, top, right, bottom, value, first, second, third);
}
