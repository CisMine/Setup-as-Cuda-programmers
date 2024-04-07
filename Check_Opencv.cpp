#include <opencv2/opencv.hpp>

int main() {
    if (cv::cuda::getCudaEnabledDeviceCount() == 0) {
        std::cout << "CUDA is not available on this system." << std::endl;
    } else {
        std::cout << "CUDA is available on this system." << std::endl;
    }

    return 0;
}
