
<p align="center">
 <h1 align="center">Dual boot Ubuntu </h1>
</p>

Dual boot Ubuntu refers to the process of installing and running the Ubuntu Linux operating system alongside another operating system, such as Windows or macOS, on a single computer.

When you dual boot your computer with Ubuntu, you can choose which operating system to use when starting your computer. This allows you to switch between multiple operating systems without needing to replace one with another.

### Let me briefly discuss the pros and cons of this:

### pros:
- Native performance: Running Ubuntu natively on your hardware will typically provide better performance than running it in a virtual machine
- Full hardware access: You have full access to all hardware devices connected to your computer.
- No resource limitations: Your operating system will be able to use all available resources on the machine without any limitations imposed by the virtualization layer
  
### Cons:
- Inflexibility: You can only run one operating system at a time, so you cannot easily switch between different OS environments
- Setup complexity
  
**My opinion is that if you work in the IT industry, you should be familiar with Ubuntu and maybe using all the time without switching to different OS environments, about the setup I’ll show you right now after this so why don’t you try it**



<p align="center">
 <h1 align="center">SETUP </h1>
</p>

I’ll summarize these steps, what you need, and also what kinds of errors you may get in.

- You need a USB ( 8GB at least)
- download [rufus](https://rufus.ie/en/)
- download the [Ubuntu desktop 22.04.4 LTS or 20.04.6 LTS](https://ubuntu.com/download/desktop)  


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/845870db-cdcb-433c-8090-df1228375d06" />
</p>


### Shirnk for the space

window + R -> diskmgmt.msc


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/629167d4-99c1-4702-9716-99f7cb1437cc" />
</p>

Right click on C ( or any disk that you want) and shrink Volume. Remember that we need at least 160 000 MB



<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/f5254391-1bc2-4568-aff6-1823a67194b3" />
</p>

### Open rufus


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/804845cf-98b6-45f8-b06c-3a65251b12a8" />
</p>

1 is your USB

2 is Ubuntu .iso link

After finishing click CLOSE

### Turn off BIOS

After closing rufus-> restart the computer -> while it opens press f2 to open BIOS ->Go to Boot -> turn off secure boot (disable)

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/339c37a3-bfba-4d0d-8337-bb235581feb0" />
</p>

I know that some computers will have different systems and different ways to disable secure boot but overall just find BOOT and then you will see secure boot

### Ubuntu steps

After disable secure boot restart again, while it opens press f10(or f12, depending on your computer) to install Ubuntu. You will see these lines, choose Install Ubuntu(safe graphics) and then click the button ’ -> ’ on your computer to download


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/0c3dd407-5ac6-4ed4-a40a-e8bbf7a75e6a" />
</p>

After that you will see this, choose install Ubuntu, and follow my steps below

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/5b9e7dcd-13b4-4194-b1a7-05df41207e70" />
</p>

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/3dc6c4a8-496a-4556-a293-3c0bb46a5daa" />
</p>

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/737b8d2d-7e39-4f5f-8ede-fec2d03c6c2c" />
</p>

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/c61b93da-40d7-41ed-abdc-f610941ea43f" />
</p>


free space is the space you shrink before ( at least 160 000MB) click free space then click ‘ + ’ ( that I red circle)

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/92ee4d5e-03f3-4bf8-aefe-33712a37a35b" />
</p>

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/0f1004a9-1939-4197-ad4e-687af0d1106f" />
</p>

Size 15000 MB you see in this picture just for example,here we'll use 100 000MB after choosing Primary -> Beginning of this space -> Mount point: / -> click ok

redo these steps but

Instead of / ( Mount point) -> /home

size is 60 000MB

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/e8fcdfc6-f53a-4d8e-abd8-0d7b9d43f8d3" />
</p>

click continue

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/ea6a9f90-34c5-43ae-9cd1-5466447bd015" />
</p>


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/78b8fe06-8e94-4693-9d1a-324a6065289c" />
</p>

Remember your password because you will use it many times to access to install some things in Ubuntu

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/abccc0e2-35d1-483c-8ccb-d19e05097a2c" />
</p>


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/25f53442-af57-4baa-b45f-354195a3f698" />
</p>


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/6d4e6c35-e921-4962-aa4c-d968502e2543" />
</p>

# Congratulation on success in setting up Ubuntu

### Error you may get

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/0b5ddb5f-4aa7-4e69-87aa-89bff590c6f5" />
</p>

you won’t see Install Ubuntu, don’t worry about that, choose Ubuntu(safe graphics) and click the button ‘ -> ’ on your computer you will see this

This mean your file/casper/vmlinuz has problem

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/3e83a2f0-a0bc-429d-8363-d1779140def7" />
</p>

now go to your USB disk


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/8e1e99aa-f83b-4832-8dab-dfae57924316" />
</p>

click casper


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/0a202921-74f7-4aee-acba-4899eca02ceb" />
</p>

these are all the files you need in casper

<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/bdb3d30e-9dd6-45a3-84bd-20509d717103" />
</p>

You may get these problems:

- Have less than 8 files (I got this before)
- Especially don’t have vmlinuz file
  
Go back to the path that you install Ubuntu 20.04.6 and extract here


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/67f13079-01e6-4609-96dc-78abab8a899a" />
</p>

after that copy all files that you extract to paste into your USB


<p align="center">
  <img src="https://github.com/CisMine/Setup-for-Cuda-programmers/assets/122800932/002b8a1e-02f2-4d5f-b110-4b01d581c3b8" />
</p>

well done, the problem has been solved. If you still get any troubles let me know. Restart your computer and f2 to do the following steps above.
