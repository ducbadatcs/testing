import glob, os
for file in glob.glob("*.cpp"):
    fname = file[:file.find(".cpp")]
    print(fname)
    cmd = f"g++ -O2 {file} -o {fname} && /usr/bin/time ./{fname}"
    print(cmd)
    os.system(cmd)
    print() # empty line to pad space
    