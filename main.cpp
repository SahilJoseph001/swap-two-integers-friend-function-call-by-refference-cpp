// *** Coded By SahilJoseph *** //
# include <iostream>

class Y;

class X {
    private:
        int integer;
    public:
        void setValue() {
            std::cout<<"Enter the 1st Integer : ";
            std::cin>>integer;
        }
        void displayValue() {
            std::cout<<"The value of 1st Integer is : "<<integer<<std::endl;
        }
        friend void exchange(X &o, Y &p);
};
class Y {
    private:
        int integer;
    public:
        void setValue() {
            std::cout<<"Enter the 2nd Integer : ";
            std::cin>>integer;
        }
        void displayValue() {
            std::cout<<"The value of 2nd Integer is : "<<integer<<std::endl;
        }
        friend void exchange(X &o, Y &p);
};

void exchange(X &o, Y &p) {
    int temp;
    temp = o.integer;
    o.integer = p.integer;
    p.integer = temp;
}

int main(int argc, char const *argv[]) {

    while (true) {

        X g;
        Y h;
        g.setValue();
        h.setValue();
        g.displayValue();
        h.displayValue();
        std::cout<<std::endl;
        std::cout<<"Exchanging Values....."<<std::endl;
        std::cout<<std::endl;
        exchange(g,h);
        g.displayValue();
        h.displayValue();
        std::cout<<std::endl;
        std::cout<<"Values Exchanged Succesfully....."<<std::endl;
        std::cout<<std::endl;

    }

    return 0;
}
