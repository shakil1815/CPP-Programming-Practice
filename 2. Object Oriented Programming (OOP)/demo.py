import os

# Apnar physics folder er path
folder_path = r"F:\temporary use\New folder\Important Pdf\Campus physics"

# Keyword ebong tar bodle jei bangla nam hobe tar list
rules = [
    ("vauto alokbiggan", "ভৌত আলোকবিজ্ঞান.pdf"),
    ("vector 1", "ভেক্টর ১.pdf"),
    ("vector part 2", "ভেক্টর ২.pdf"),
    ("thermodynamics", "তাপগতিবিদ্যা.pdf"),
    ("sthir torit", "স্থির তড়িৎ.pdf"),
    ("semiconductor", "সেমিকন্ডাক্টর ও ইলেকট্রনিক্স.pdf"),
    ("porjabritta", "পর্যাবৃত্ত গতি.pdf"),
    ("mohakorso", "মহাকর্ষ ও অভিকর্ষ.pdf"),
    ("modern physics", "আধুনিক পদার্থবিজ্ঞানের সূচনা.pdf"),
    ("ka shokti", "কাজ, শক্তি ও ক্ষমতা.pdf"),
    ("gravity", "মহাকর্ষ.pdf"),
    ("cholotorit", "চল তড়িৎ.pdf"),
    ("adhorso gas", "আদর্শ গ্যাস ও গ্যাসের গতিতত্ত্ব.pdf")
]

# Folder er sob file er upor loop chalano
for filename in os.listdir(folder_path):
    old_file_path = os.path.join(folder_path, filename)
    
    # Sudhu file holei kaj korbe
    if os.path.isfile(old_file_path):
        filename_lower = filename.lower()
        renamed = False
        
        # Prothome Newtonian mechanics check (karon eta duiti alada part)
        if "newtonian" in filename_lower or "mechanis" in filename_lower:
            if "1" in filename_lower or "part 1" in filename_lower or "mechanis" in filename_lower:
                new_name = "নিউটনিয়ান বলবিদ্যা ১.pdf"
            else:
                new_name = "নিউটনিয়ান বলবিদ্যা ২.pdf"
            
            new_file_path = os.path.join(folder_path, new_name)
            if not os.path.exists(new_file_path):
                os.rename(old_file_path, new_file_path)
                print(f"✅ Renamed: '{filename}' -> '{new_name}'")
            renamed = True
        
        # Baki sob rules check kora
        if not renamed:
            for keyword, new_name in rules:
                if keyword in filename_lower:
                    new_file_path = os.path.join(folder_path, new_name)
                    if not os.path.exists(new_file_path):
                        os.rename(old_file_path, new_file_path)
                        print(f"✅ Renamed: '{filename}' -> '{new_name}'")
                    else:
                        print(f"⚠️ '{new_name}' namer file age thekei ache!")
                    renamed = True
                    break
                    
        if not renamed and filename.endswith(".pdf"):
            print(f"🔍 Ei fileti match koreni: '{filename}'")

print("\n🎉 Sob file rename korar kaj sesh!")