import glob, os
for file in glob.glob("*.cpp"):
    fname = file[:file.find(".cpp")]
    print(fname)
    os.system(f"g++ -O2 {file} -o {fname} && time ./{fname}")
    