struct std_string
{
    union _Bxty
    {
        char _Buf[16];
        char *_Ptr;
    } _Bx;
    int _Mysize;
    int _Myres;
};
