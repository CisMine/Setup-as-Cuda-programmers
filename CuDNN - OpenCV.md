

<p align="center">
 <h1 align="center"> Install CuDNN v8.9.7 </h1>
</p>


Going this [link](https://developer.nvidia.com/rdp/cudnn-archive?fbclid=IwAR1Wl9U3uTFgihg49VkO-kyXihTqr0M1rtkCp9lwgM1G9SWE29WiNLRDg3Q_aem_AXAgXED-yDF8TPZ1KFasp4tA78932KiQ-plbcM1Vn2k2KGipmdYxfkQ4Y5FfOyz6Ygx9TNFpfLVTjDleBveNADdx) to download CuDNN v8.9.7

Download the **Local Installer for Linux x86_64 (Tar)**


<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/fda5f8d4-d14d-482b-9a90-f7a120b4556a" />
</p>


Next, open the terminal in the directory where you downloaded the CuDNN files.

run these commands:

```
$ sudo apt-get install zlib1g
$ tar -xvf cudnn-linux-x86_64-8.9.7.29_cuda12-archive.tar.xz
$ sudo cp cudnn-*-archive/include/cudnn*.h /usr/local/cuda/include 
$ sudo cp -P cudnn-*-archive/lib/libcudnn* /usr/local/cuda/lib64 
$ sudo chmod a+r /usr/local/cuda/include/cudnn*.h /usr/local/cuda/lib64/libcudnn*
```

You have successfully installed the CuDNN. You can verify this by open terminal and run this command

```
$cat /usr/local/cuda/include/cudnn_version.h | grep CUDNN_MAJOR -A 2
```

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/a0a458c9-2ded-4bbb-afb9-2bd660a0a284" />
</p>

Which means the version is 8.9.7

If you want to know more about how to install CuDNN steps, you can check [this](https://docs.nvidia.com/deeplearning/cudnn/archives/cudnn-897/install-guide/?fbclid=IwAR2yR9uRT4AoguZofJNhyoJ2djYZQ1dd-T9D2bErDdhId_BMx8dDOTAhX10_aem_AXDt4TzrW58tgdl8UkynmnMj5prYJiEPKMbLXXz3dujspnV4yYQUtCI3PMmWEzmIJryx-reld9HDKC9wA2ylqV1V)


<p align="center">
 <h1 align="center"> Install OpenCV </h1>
</p>

### Update the ubuntu system packages

```
$ sudo apt-get update && sudo apt-get upgrade
```

### Install required tools and packages

```
$ sudo apt install cmake
$ sudo apt install gcc g++
$ sudo apt install python3 python3-dev python3-numpy
$ sudo apt install libavcodec-dev libavformat-dev libswscale-dev
$ sudo apt install libgstreamer-plugins-base1.0-dev libgstreamer1.0-dev
$ sudo apt install libgtk-3-dev
$ sudo apt install libpng-dev libjpeg-dev libopenexr-dev libtiff-dev libwebp-dev
```

### Download OpenCV sources

```
$ sudo -s
$ cd /opt
$ git clone https://github.com/Itseez/opencv.git
$ git clone https://github.com/Itseez/opencv_contrib.git
$ cd opencv
$ mkdir release
$ cd release
$ cmake -D CMAKE_BUILD_TYPE=RELEASE \
      -D CMAKE_INSTALL_PREFIX=/usr/local \
      -D INSTALL_C_EXAMPLES=OFF \
      -D INSTALL_PYTHON_EXAMPLES=OFF \
      -D WITH_TBB=ON \
      -D WITH_CUDA=ON \
      -D ENABLE_FAST_MATH=ON \
      -D NVCUVID_FAST_MATH=ON \
      -D CUDA_FAST_MATH=ON \
      -D WITH_CUBLAS=ON \
      -D BUILD_opencv_java=OFF \
      -D BUILD_ZLIB=ON \
      -D BUILD_TIFF=ON \
      -D WITH_GTK=ON \
      -D WITH_NVCUVID=ON \
      -D WITH_FFMPEG=ON \
      -D WITH_1394=ON \
      -D BUILD_PROTOBUF=ON \
      -D OPENCV_GENERATE_PKGCONFIG=ON \
      -D OPENCV_PC_FILE_NAME=opencv4.pc \
      -D OPENCV_ENABLE_NONFREE=OFF \
      -D WITH_GSTREAMER=ON \
      -D WITH_V4L=ON \
      -D WITH_QT=ON \
      -D WITH_CUDNN=ON \
      -D BUILD_opencv_dnn=ON \
      -D WITH_OPENGL=ON \
      -D OPENCV_EXTRA_MODULES_PATH=/opt/opencv_contrib/modules \
      -D BUILD_EXAMPLES=ON \
      /opt/opencv/

```

Remember to check whether has CuDNN or not

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/84b04ebf-9d80-42d4-8dea-5bb6225c5503" />
</p>


Then run these commands

```
$ nproc
$ make -j <your nproc>
$ make install
$ ldconfig
$ exit
$ cd ~
$ ls /usr/local/lib/pkgconfig/
$ sudo cp /usr/local/lib/pkgconfig/opencv4.pc  /usr/lib/x86_64-linux-gnu/pkgconfig/opencv.pc
```

You have successfully installed the OpenCV. You can verify this by open terminal and run this command

```
$ pkg-config --modversion opencv4
```


<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/349ae810-d919-48a6-84c5-6201df5fefda" />
</p>






















