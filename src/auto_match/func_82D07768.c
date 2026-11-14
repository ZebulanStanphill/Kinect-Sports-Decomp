int fn_82D07768(int primitiveType, int primitiveCount)
{
    switch (primitiveType) {
    case 1:
        return primitiveCount;
    case 2:
        return primitiveCount * 2;
    case 3:
        return primitiveCount * 3;
    case 4:
        return primitiveCount + 2;
    }
    return 0;
}
