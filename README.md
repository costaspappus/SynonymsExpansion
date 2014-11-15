In order to execute this chunk of code you need to link this to the wordnet library.

To do that:

0) use ubuntu 14.04 LTS operating system
1) download wnb-0.6.tar.bz2 from https://code.google.com/p/wordnet-blast/downloads/list
2) extract the compressed file in YOUR_DEV_FOLDER
3) apt-get install libboost-graph1.55-dev
4) apt-get install wordnet-sense-index
5) execute cmake CMakeLists.txt on YOUR_DEV_FOLDER
6) execute make on YOUR_DEV_FOLDER
7) copy wnb folder to usr/include/ (needs root priviledge)
8) copy libwnb.a to usr/lib/ (needs root priviledge)
9) download the synonymsExpand.cpp file and copy it inside YOUR_DEV_FOLDER
10) compile synonymsExpand.cpp by executing: $ g++ synonymsExpand.cpp -I. -L./lib/ -l wnb
