extern int fn_82A2A618(void *semaphore, int count, int *previousCount);

int fn_82CFBB08(void **semaphore, int count)
{
    return fn_82A2A618(*semaphore, count, 0);
}
