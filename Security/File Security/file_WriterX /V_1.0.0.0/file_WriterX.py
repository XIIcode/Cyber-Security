import sys
import os
path = os.path.abspath(os.path.dirname(__file__))
full_path = os.path.join(path,"file_WriterX.py")
def main():
    try:
        val = int(input("How many times do you want to perform writes : "))
    except ValueError:
        print("Running default number of writes : 30")
        val = 30
    choice_delete = input("Do you want to delete files after Writes ? (y/n) : ")
    choice_secure = input("Activate self distraction this program will be deleted and corrupted? (y/n) : ")
    print("Performing Writes do not cancel operations")
    for x in range(0,int(val)):
        for arg in sys.argv[1:]:
            hex_data = os.urandom(1000000).hex()
            with open(arg , "wb") as f:
                f.write(bytes.fromhex(hex_data))

    print("\t\tFinished performing writes.")
    if(choice_delete.lower() == "y"):
        print("Deleting files...")
        for f in sys.argv[1:]:
            os.system(f"rm {f}")
    elif(choice_delete.lower() == "n"):
        pass
    else:
        print("Deleting files...")
        for f in sys.argv[1:]:
            os.system(f"rm {f}")
    # Self destruct section.
    print("Initiating self-destruct.......")
    if(choice_secure.lower() == "y"):
        hex_data = os.urandom(1000000).hex()
        with open(full_path , "wb") as f:
            f.write(bytes.fromhex(hex_data))
        os.system(f"rm {full_path}")
        print("Successfully self distracted")
    elif(choice_secure.lower() == "n"):
        pass
    else:
        print("Invalid choice self Distract will not occur.")
main()