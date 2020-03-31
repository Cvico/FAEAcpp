#!/bin/bash

export DATAPATH=../files/*.root
export sample=dy
for f in $DATAPATH
	do
		sample=${f:9:-5}
		echo $sample
		root -l -b 'AnalysisFAEA.C("$sample")' 
	done

