class Media {
public:
	Media();
        virtual void test() {
                test2();
                cout << "inherited" << endl << endl;
        }

        virtual void test2(){

        }
protected:
        char[80] title;
        int year;
};

