extern long _InterlockedIncrement(long *);

/* p points just past the reference count (interface pointer of an object whose count is at -4). */
long fn_8306CC48(long *p)
{
    return _InterlockedIncrement(p - 1);
}
