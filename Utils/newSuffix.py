#
#	Skripta za dobivanje svih sufiksa iz magistarskog rada:
#	
#		Robert Lujo
#		Lociranje sličnih logičkih cjelina u teksutalnim dokumentima na hrvatskome jeziku
#

import os
from text_hr import morphs

import sys
reload(sys)
sys.setdefaultencoding('UTF8')
suff_registry = morphs.get_suff_registry(init_all=True, store=True)
f= open('newSuffixRegistry', 'w')
for x in suff_registry.suffix_dict:
  f.write(x)
  f.write(os.linesep)
f.close()