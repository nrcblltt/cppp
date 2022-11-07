int main()
{
    // error if inside a function extern int ix = 1024; // a declaration that includes an explicit initializer (a definition )
    int iy; // a definition
    extern int iz; // a declaration
}

extern int ix = 1024; // ok outside a function