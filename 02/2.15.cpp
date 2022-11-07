
int main()
{
    int ival = 1.01; // valid (1.01 will be converted to 1)
    // int &rval1 = 1.01; // not valid (initializer can't be a literal)
    int &rval2 = ival; // valid (initializer is an object, types match)
    // int &rval3; // not valid (reference must be initialized)
}