typedef void (*InvalidParameterHandler_82F63BA0)(const unsigned short *expression, const unsigned short *function,
                                                 const unsigned short *file, unsigned int line, unsigned int reserved);

extern InvalidParameterHandler_82F63BA0 __pInvalidArgHandler;

void _invalid_parameter_noinfo(void)
{
    InvalidParameterHandler_82F63BA0 handler = __pInvalidArgHandler;
    if (handler != 0) {
        handler(0, 0, 0, 0, 0);
        return;
    }
    __debugbreak();
}
