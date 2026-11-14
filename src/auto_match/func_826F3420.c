struct Item_826F3420 { int pad[3]; unsigned char busy; };
struct Inner_826F3420 { int pad[4]; int item; };
struct Owner_826F3420 { int pad[2]; struct Inner_826F3420 *inner; };

int fn_826F3420(struct Owner_826F3420 *self, unsigned int flags)
{
    int result = 0;
    int item;
    if ((flags & 0x80) == 0) {
        item = self->inner->item;
        if (item != 0 && ((struct Item_826F3420 *)item)->busy == 0) {
            result = item;
        }
    }
    return result;
}