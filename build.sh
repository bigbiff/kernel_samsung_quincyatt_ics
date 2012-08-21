make clean CROSS_COMPILE=/home/bigbiff/android_prebuilt_toolchains/arm-eabi-4.4.3/bin/arm-eabi- && make CONFIG_INITRAMFS_SOURCE=/data/www/note/attics/boot.img-ramdisk/ ARCH=arm CROSS_COMPILE=/home/bigbiff/android_prebuilt_toolchains/arm-eabi-4.4.3/bin/arm-eabi- -j7 > error.txt 2>&1
cp arch/arm/boot/zImage /data/win/
find drivers/ -name *.ko -exec cp {} /data/win/system/ \;
