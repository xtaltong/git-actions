#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle() {
	    set_width(0);
	    set_height(0);
	}
        Rectangle(int w,int h) {
	    set_width(w);
	    set_height(h);
	}

        void set_width(int w) {
	    this->width = w;
	}
        void set_height(int h) {
	    this->height = h;
	}
        int area() {
	    return width * height;
	}
        int perimeter() {
	    return 2*(width + height);
	}
};

#endif // RECTANGLE_HPP
