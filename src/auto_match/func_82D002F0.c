/* Hash map iterator check: the iterator (a slot index) is valid while it does not pass hashMod.
   The hkBool result is returned through r3. */
typedef struct Map_82D002F0 {
    void *elems;    /* 0x00 */
    int numElems;   /* 0x04 */
    int hashMod;    /* 0x08 */
} Map_82D002F0;

void fn_82D002F0(char *result, const Map_82D002F0 *self, int it)
{
    *result = it <= self->hashMod;
}
