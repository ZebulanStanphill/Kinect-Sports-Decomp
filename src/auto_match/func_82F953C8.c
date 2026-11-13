// Kinect Sports retail 4D5308C9, function 0x82F953C8 (84 bytes).
// Calls fn_82F95C80(self, fn_82F95DB0(first, last), first) and returns self.
extern void *fn_82F95DB0(void *, void *);
extern void fn_82F95C80(void *, void *, void *);

void *fn_82F953C8(void *self, void *first, void *last)
{
    fn_82F95C80(self, fn_82F95DB0(first, last), first);
    return self;
}
