#!/usr/bin/env sh


out_file=nm.${1}.txt
echo "Extern: ${1}" >> ${out_file}

for o in CMakeFiles/a.out.dir/*.o;
do
    echo "" >> ${out_file}
    echo "${o}:" >> ${out_file}
    echo '```' >> ${out_file}
    nm -C ${o} | grep Templated >> ${out_file}
    echo '```' >> ${out_file}
done
