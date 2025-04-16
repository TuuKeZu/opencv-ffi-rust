#include <iostream>
#include <opencv2/opencv.hpp>

struct TestStruct {
    bool a {false};
};

int run_image_tool(TestStruct s) {
    cv::Mat image;
    image = cv::imread("./input.jpg");
    
    std::cout << s.a << "\n";

    cv::imwrite("out.jpg", image);
    
    return 43;
}
