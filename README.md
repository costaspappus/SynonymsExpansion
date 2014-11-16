In order to execute this chunk of code you need to link this to the wordnet library.

To do that:

- use ubuntu 14.04 LTS operating system
- download wnb-0.6.tar.bz2 from https://code.google.com/p/wordnet-blast/downloads/list
- extract the compressed file in YOUR_DEV_FOLDER
- apt-get install libboost-graph1.55-dev
- apt-get install wordnet-sense-index
- execute cmake CMakeLists.txt on YOUR_DEV_FOLDER
- execute make on YOUR_DEV_FOLDER
- copy wnb folder to usr/include/ (needs root priviledge)
- copy libwnb.a to usr/lib/ (needs root priviledge)
- download the synonymsExpand.cpp file and copy it inside YOUR_DEV_FOLDER
- compile synonymsExpand.cpp by executing: $ g++ synonymsExpand.cpp -I. -L./lib/ -l wnb
