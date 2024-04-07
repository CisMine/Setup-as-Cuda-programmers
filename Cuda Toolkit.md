
<p align="center">
 <h1 align="center"> Cuda Toolkit - Cuda Driver</h1>
</p>


The CUDA Driver acts as a bridge between the operating system and the GPU, enabling communication with the hardware. Without it, the CUDA Toolkit, which provides software tools for GPU programming, cannot function properly. So, before installing the CUDA Toolkit, it's essential to install the CUDA Driver to ensure proper GPU utilization.

If you don't know the difference between them, I have explained in [here](https://github.com/CisMine/Guide-NVIDIA-Tools/tree/main/Chapter02)



<p align="center">
 <h1 align="center"> Install Cuda Driver </h1>
</p>

To begin, it's important to verify that your NVIDIA driver is compatible with your computer. This can be confirmed by [Nvidia Driver](https://www.nvidia.com/Download/index.aspx?lang=en-us)

For example: my computer is Geforce MX570 - Ubuntu 22.04

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/84b8cff6-ba45-4d0d-ab07-e046335d7f4e" />
</p>

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/add2b8f1-4d34-46e1-92ee-d12c357fd191" />
</p>


Now I know that my suitable Nvidia Driver version is: 545.29.02

Let's open **Software & Updates** and install Nvidia Driver. Notice that install **driver metapackage**


<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/e964f4b7-bb34-4d2f-9b95-48fa7525f70e" />
</p>

After installing, click **restart**

You have successfully installed the CUDA Driver. You can verify this by open terminal and run this command
```
$nvidia-smi
```

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/45627d76-fe71-46a0-a3dc-d9f3a7072175" />
</p>

You'll notice a recommendation for the CUDA Toolkit version


<p align="center">
 <h1 align="center"> Install Cuda Toolkit</h1>
</p>

Now, you need to find the appropriate CUDA Toolkit to download in this [link](https://developer.nvidia.com/cuda-toolkit-archive
)


<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/1fac2b30-b3f5-4380-9bcf-fab6ce4525c8" />
</p>


For example: I need to isntall Cuda Toolkit version: 12.3

Follow the Installation Instructions

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/afc1537c-f22d-4d8c-b826-d1b2aff84432" />
</p>

When done, run these commands to add your path

```
$nano /home/$USER/.bashrc
```

Then scroll until the end and add these ( **replace cuda-12.3 into your version** )

```
export PATH="/usr/local/cuda-12.3/bin:$PATH"
export LD_LIBRARY_PATH="/usr/local/cuda-12.3/lib64:$LD_LIBRARY_PATH"
```

Then:

Ctrl + o : save

Enter    : accept changes

Ctrl + x : close editor

You have successfully installed the CUDA Toolkit. You can verify this by open terminal and run this command

```
$nvcc -V
```

<p align="center">
  <img src="https://github.com/CisMine/Setup-as-Cuda-programmers/assets/122800932/626425e9-a1bb-42ee-ae7d-32b014eff844" />
</p>



