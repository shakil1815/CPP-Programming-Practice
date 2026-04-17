const hamburger = document.querySelector('.hamburger');
const navMenu = document.querySelector('.nav-menu');
const navLinks = document.querySelectorAll('.nav-link');
const navbar = document.querySelector('.navbar');
const sections = document.querySelectorAll('section');
const themeToggle = document.getElementById('themeToggle');
const languageSelect = document.getElementById('languageSelect');
const contactForm = document.getElementById('contactForm');

const translations = {
    en: {
        'nav.home': 'Home',
        'nav.about': 'About',
        'nav.skills': 'Skills',
        'nav.education': 'Education',
        'nav.projects': 'Projects',
        'nav.contact': 'Contact',
        'theme.dark': 'Dark',
        'theme.light': 'Light',
        'hero.kicker': 'CSE Student Portfolio',
        'hero.title': "Hi, I'm <span class='highlight'>Shakil Ahmed</span>",
        'hero.subtitle': 'Undergraduate CSE Student | Aspiring Software Engineer | Competitive Programmer',
        'hero.description': "Mastering CSE fundamentals to pursue a Master's in Germany and join global tech companies.",
        'hero.btnContact': 'Get In Touch',
        'hero.btnProjects': 'View Projects',
        'about.title': 'About Me',
        'about.p1': 'I am currently pursuing my B.Sc. in Computer Science and Engineering at Pirojpur Science and Technology University (PrSTU). Originally from Barguna, my journey began at Ayla Patakata Sonarbangla High School and continued through Alekanda Govt. College, Barishal.',
        'about.p2': 'My passion lies in competitive programming and core CS fundamentals. I solve problems on Codeforces, VJudge, and HackerRank while building stronger logic and analytical skills.',
        'about.p3': "My goal is to pursue a Master's degree in Germany and grow into a world-class software engineer. I actively use modern tools, GitHub, and AI-assisted learning to move faster.",
        'about.info1': 'BSc in CSE, PrSTU',
        'about.info2': 'Barguna, Bangladesh',
        'about.info3': 'Expected 2028',
        'skills.title': 'My Skills',
        'skills.card1.title': 'Programming Languages',
        'skills.card1.tag4': 'Logic Building',
        'skills.card2.title': 'Problem Solving',
        'skills.card3.title': 'Design and Branding',
        'skills.card3.tag1': 'Logo Design',
        'skills.card3.tag3': 'Graphics',
        'skills.card3.tag4': 'Branding',
        'skills.card4.title': 'Tools and Technologies',
        'education.title': 'Education',
        'education.bsc.title': 'B.Sc. in Computer Science and Engineering',
        'education.bsc.date': '2023 - Expected 2028',
        'education.bsc.uni': 'Pirojpur Science and Technology University (PrSTU)',
        'education.bsc.cgpa': '1st Semester CGPA: 3.54',
        'education.bsc.desc': 'Focused on competitive programming, data structures, algorithms, OOP with C++, and software engineering fundamentals.',
        'education.hsc.title': 'Higher Secondary Certificate (HSC)',
        'education.hsc.date': 'Passed 2023',
        'education.hsc.school': 'Alekanda Govt. College, Barishal',
        'education.hsc.gpa': 'GPA: 4.58',
        'education.hsc.desc': 'Completed with a science background, building strong fundamentals in mathematics and physics.',
        'education.ssc.title': 'Secondary School Certificate (SSC)',
        'education.ssc.date': 'Completed',
        'education.ssc.school': 'Ayla Patakata Sonarbangla High School, Barguna',
        'education.ssc.gpa': 'GPA: 5.00',
        'education.ssc.desc': 'Started my academic journey with a passion for science and technology.',
        'projects.title': 'My Projects',
        'projects.card1.title': 'National Undergraduate Math Olympiad',
        'projects.card1.desc': 'Participated in the National Undergraduate Mathematics Olympiad and practiced advanced mathematical problem-solving.',
        'projects.card1.tag1': 'Competition',
        'projects.card1.tag2': 'Mathematics',
        'projects.card1.tag3': 'Problem Solving',
        'projects.card2.title': 'C++ OOP Practice Repository',
        'projects.card2.desc': 'A repository focused on C++ OOP concepts including inheritance, polymorphism, encapsulation, and dynamic memory management.',
        'projects.card3.title': 'Department Logo and Branding',
        'projects.card3.desc': 'Designed logos, banners, and branding materials for academic and personal projects by combining creativity and technical discipline.',
        'projects.card3.tag1': 'Design',
        'projects.card3.tag2': 'Branding',
        'projects.card4.title': 'GitHub Student Projects',
        'projects.card4.desc': 'Using the GitHub Student Developer Pack to build professional projects and collaborate with the global developer community.',
        'projects.card4.tag2': 'Open Source',
        'projects.card4.tag3': 'Collaboration',
        'contact.title': 'Get In Touch',
        'contact.subtitle': "Let's Connect",
        'contact.desc': 'I am always open to discussing competitive programming, collaboration, and technology opportunities around the world.',
        'contact.university': 'Pirojpur Science and Technology University',
        'contact.location': 'Barguna, Bangladesh',
        'contact.form.name': 'Your Name',
        'contact.form.email': 'Your Email',
        'contact.form.message': 'Your Message',
        'contact.form.button': 'Send Message',
        'footer.copy': 'Copyright 2026 Shakil Ahmed. All rights reserved.',
        'footer.note': 'Designed by a PrSTU CSE student with global ambition.',
        'alert.fill': 'Please fill in all fields',
        'alert.email': 'Please enter a valid email address',
        'alert.success': "Thank you, {name}! Your message has been received. I will get back to you soon."
    },
    de: {
        'nav.home': 'Startseite',
        'nav.about': 'Uber Mich',
        'nav.skills': 'Fahigkeiten',
        'nav.education': 'Ausbildung',
        'nav.projects': 'Projekte',
        'nav.contact': 'Kontakt',
        'theme.dark': 'Dunkel',
        'theme.light': 'Hell',
        'hero.kicker': 'CSE Studentenportfolio',
        'hero.title': "Hallo, ich bin <span class='highlight'>Shakil Ahmed</span>",
        'hero.subtitle': 'Informatikstudent | Zukuenftiger Softwareentwickler | Wettbewerbsprogrammierer',
        'hero.description': 'Ich baue starke Informatikgrundlagen auf, um in Deutschland einen Master zu machen und in globalen Tech-Unternehmen zu arbeiten.',
        'hero.btnContact': 'Kontakt',
        'hero.btnProjects': 'Projekte Ansehen',
        'about.title': 'Uber Mich',
        'about.p1': 'Ich studiere derzeit Informatik und Ingenieurwissenschaften an der Pirojpur Science and Technology University (PrSTU). Ich komme aus Barguna und begann meinen Bildungsweg an der Ayla Patakata Sonarbangla High School.',
        'about.p2': 'Meine Leidenschaft gilt dem Competitive Programming und den Kernkonzepten der Informatik. Ich lose Aufgaben auf Codeforces, VJudge und HackerRank.',
        'about.p3': 'Mein Ziel ist ein Masterstudium in Deutschland und eine Karriere als erstklassiger Softwareentwickler. Dabei nutze ich moderne Tools, GitHub und KI-gestuetztes Lernen.',
        'about.info1': 'BSc in CSE, PrSTU',
        'about.info2': 'Barguna, Bangladesch',
        'about.info3': 'Voraussichtlich 2028',
        'skills.title': 'Meine Fahigkeiten',
        'skills.card1.title': 'Programmiersprachen',
        'skills.card1.tag4': 'Logisches Denken',
        'skills.card2.title': 'Problemlosung',
        'skills.card3.title': 'Design und Branding',
        'skills.card3.tag1': 'Logo Design',
        'skills.card3.tag3': 'Grafik',
        'skills.card3.tag4': 'Branding',
        'skills.card4.title': 'Tools und Technologien',
        'education.title': 'Ausbildung',
        'education.bsc.title': 'B.Sc. in Informatik und Ingenieurwissenschaften',
        'education.bsc.date': '2023 - Erwartet 2028',
        'education.bsc.uni': 'Pirojpur Science and Technology University (PrSTU)',
        'education.bsc.cgpa': 'CGPA im 1. Semester: 3.54',
        'education.bsc.desc': 'Schwerpunkte sind Competitive Programming, Datenstrukturen, Algorithmen, OOP mit C++ und Softwaretechnik.',
        'education.hsc.title': 'Higher Secondary Certificate (HSC)',
        'education.hsc.date': 'Bestanden 2023',
        'education.hsc.school': 'Alekanda Govt. College, Barishal',
        'education.hsc.gpa': 'GPA: 4.58',
        'education.hsc.desc': 'Abschluss im naturwissenschaftlichen Bereich mit starker Basis in Mathematik und Physik.',
        'education.ssc.title': 'Secondary School Certificate (SSC)',
        'education.ssc.date': 'Abgeschlossen',
        'education.ssc.school': 'Ayla Patakata Sonarbangla High School, Barguna',
        'education.ssc.gpa': 'GPA: 5.00',
        'education.ssc.desc': 'Der Beginn meiner akademischen Reise mit Begeisterung fuer Wissenschaft und Technik.',
        'projects.title': 'Meine Projekte',
        'projects.card1.title': 'Nationale Mathematik Olympiade',
        'projects.card1.desc': 'Teilnahme an der nationalen Mathematik Olympiade mit Fokus auf fortgeschrittenes Problemloesen.',
        'projects.card1.tag1': 'Wettbewerb',
        'projects.card1.tag2': 'Mathematik',
        'projects.card1.tag3': 'Problemlosung',
        'projects.card2.title': 'C++ OOP Uebungsrepository',
        'projects.card2.desc': 'Repository zu C++ OOP Themen wie Vererbung, Polymorphie, Kapselung und dynamischer Speicherverwaltung.',
        'projects.card3.title': 'Abteilungslogo und Branding',
        'projects.card3.desc': 'Design von Logos, Bannern und Branding Material fuer akademische und persoenliche Projekte.',
        'projects.card3.tag1': 'Design',
        'projects.card3.tag2': 'Branding',
        'projects.card4.title': 'GitHub Studentenprojekte',
        'projects.card4.desc': 'Nutzung des GitHub Student Developer Pack fuer professionelle Projekte und internationale Zusammenarbeit.',
        'projects.card4.tag2': 'Open Source',
        'projects.card4.tag3': 'Zusammenarbeit',
        'contact.title': 'Kontakt',
        'contact.subtitle': 'Lass Uns Verbinden',
        'contact.desc': 'Ich freue mich ueber Gesprache zu Competitive Programming, Zusammenarbeit und globalen Technologiechancen.',
        'contact.university': 'Pirojpur Science and Technology University',
        'contact.location': 'Barguna, Bangladesch',
        'contact.form.name': 'Dein Name',
        'contact.form.email': 'Deine E-Mail',
        'contact.form.message': 'Deine Nachricht',
        'contact.form.button': 'Nachricht Senden',
        'footer.copy': 'Copyright 2026 Shakil Ahmed. Alle Rechte vorbehalten.',
        'footer.note': 'Gestaltet von einem PrSTU CSE Studenten mit globalen Zielen.',
        'alert.fill': 'Bitte alle Felder ausfuellen',
        'alert.email': 'Bitte eine gueltige E-Mail-Adresse eingeben',
        'alert.success': 'Danke, {name}! Deine Nachricht wurde erhalten. Ich melde mich bald bei dir.'
    },
    bn: {
        'nav.home': 'হোম',
        'nav.about': 'আমার সম্পর্কে',
        'nav.skills': 'স্কিলস',
        'nav.education': 'শিক্ষা',
        'nav.projects': 'প্রজেক্টস',
        'nav.contact': 'যোগাযোগ',
        'theme.dark': 'ডার্ক',
        'theme.light': 'লাইট',
        'hero.kicker': 'সিএসই স্টুডেন্ট পোর্টফোলিও',
        'hero.title': "হাই, আমি <span class='highlight'>শাকিল আহমেদ</span>",
        'hero.subtitle': 'আন্ডারগ্র্যাজুয়েট সিএসই স্টুডেন্ট | আগ্রহী সফটওয়্যার ইঞ্জিনিয়ার | কম্পেটিটিভ প্রোগ্রামার',
        'hero.description': 'সিএসইর মৌলিক বিষয়গুলো শক্ত করে জার্মানিতে মাস্টার্স এবং গ্লোবাল টেক কোম্পানিতে কাজ করার প্রস্তুতি নিচ্ছি।',
        'hero.btnContact': 'যোগাযোগ করুন',
        'hero.btnProjects': 'প্রজেক্ট দেখুন',
        'about.title': 'আমার সম্পর্কে',
        'about.p1': 'আমি বর্তমানে পিরোজপুর সায়েন্স অ্যান্ড টেকনোলজি ইউনিভার্সিটি (PrSTU)-তে সিএসই বিভাগে পড়াশোনা করছি। আমার যাত্রা শুরু হয় বরগুনার আইলা পাটাকাটা সোনারবাংলা হাই স্কুল থেকে।',
        'about.p2': 'আমার আগ্রহ কম্পেটিটিভ প্রোগ্রামিং এবং সিএসের বেসিক ধারণাগুলো শক্ত করা। আমি Codeforces, VJudge এবং HackerRank-এ নিয়মিত সমস্যা সমাধান করি।',
        'about.p3': 'আমার লক্ষ্য জার্মানিতে মাস্টার্স করা এবং বিশ্বমানের সফটওয়্যার ইঞ্জিনিয়ার হওয়া। শেখার গতি বাড়াতে আমি GitHub ও AI টুলস ব্যবহার করি।',
        'about.info1': 'BSc in CSE, PrSTU',
        'about.info2': 'বরগুনা, বাংলাদেশ',
        'about.info3': 'সম্ভাব্য সমাপ্তি ২০২৮',
        'skills.title': 'আমার স্কিলস',
        'skills.card1.title': 'প্রোগ্রামিং ভাষা',
        'skills.card1.tag4': 'লজিক বিল্ডিং',
        'skills.card2.title': 'সমস্যা সমাধান',
        'skills.card3.title': 'ডিজাইন ও ব্র্যান্ডিং',
        'skills.card3.tag1': 'লোগো ডিজাইন',
        'skills.card3.tag3': 'গ্রাফিক্স',
        'skills.card3.tag4': 'ব্র্যান্ডিং',
        'skills.card4.title': 'টুলস ও টেকনোলজি',
        'education.title': 'শিক্ষা',
        'education.bsc.title': 'বি.এসসি ইন কম্পিউটার সায়েন্স অ্যান্ড ইঞ্জিনিয়ারিং',
        'education.bsc.date': '২০২৩ - সম্ভাব্য ২০২৮',
        'education.bsc.uni': 'পিরোজপুর সায়েন্স অ্যান্ড টেকনোলজি ইউনিভার্সিটি (PrSTU)',
        'education.bsc.cgpa': '১ম সেমিস্টার CGPA: 3.54',
        'education.bsc.desc': 'কম্পেটিটিভ প্রোগ্রামিং, ডাটা স্ট্রাকচার, অ্যালগরিদম, C++ OOP এবং সফটওয়্যার ইঞ্জিনিয়ারিংয়ের উপর কাজ করছি।',
        'education.hsc.title': 'এইচএসসি',
        'education.hsc.date': 'পাস: ২০২৩',
        'education.hsc.school': 'আলেকান্দা সরকারি কলেজ, বরিশাল',
        'education.hsc.gpa': 'GPA: 4.58',
        'education.hsc.desc': 'বিজ্ঞান বিভাগ থেকে সম্পন্ন, গণিত ও পদার্থবিজ্ঞানে শক্ত ভিত্তি তৈরি হয়েছে।',
        'education.ssc.title': 'এসএসসি',
        'education.ssc.date': 'সম্পন্ন',
        'education.ssc.school': 'আইলা পাটাকাটা সোনারবাংলা হাই স্কুল, বরগুনা',
        'education.ssc.gpa': 'GPA: 5.00',
        'education.ssc.desc': 'বিজ্ঞান ও প্রযুক্তির প্রতি আগ্রহ নিয়ে একাডেমিক যাত্রা শুরু।',
        'projects.title': 'আমার প্রজেক্টস',
        'projects.card1.title': 'ন্যাশনাল আন্ডারগ্র্যাজুয়েট ম্যাথ অলিম্পিয়াড',
        'projects.card1.desc': 'জাতীয় পর্যায়ের ম্যাথ অলিম্পিয়াডে অংশগ্রহণ করে উন্নত সমস্যা সমাধান দক্ষতা চর্চা করেছি।',
        'projects.card1.tag1': 'প্রতিযোগিতা',
        'projects.card1.tag2': 'গণিত',
        'projects.card1.tag3': 'সমস্যা সমাধান',
        'projects.card2.title': 'C++ OOP প্র্যাকটিস রিপোজিটরি',
        'projects.card2.desc': 'C++ OOP-এর inheritance, polymorphism, encapsulation ও dynamic memory management নিয়ে কাজ।',
        'projects.card3.title': 'ডিপার্টমেন্ট লোগো ও ব্র্যান্ডিং',
        'projects.card3.desc': 'একাডেমিক ও ব্যক্তিগত প্রজেক্টের জন্য লোগো, ব্যানার ও ব্র্যান্ডিং উপকরণ ডিজাইন করেছি।',
        'projects.card3.tag1': 'ডিজাইন',
        'projects.card3.tag2': 'ব্র্যান্ডিং',
        'projects.card4.title': 'GitHub Student Projects',
        'projects.card4.desc': 'GitHub Student Developer Pack ব্যবহার করে প্রফেশনাল প্রজেক্ট তৈরি এবং গ্লোবাল কমিউনিটির সাথে সহযোগিতা করছি।',
        'projects.card4.tag2': 'ওপেন সোর্স',
        'projects.card4.tag3': 'সহযোগিতা',
        'contact.title': 'যোগাযোগ',
        'contact.subtitle': 'চলুন কানেক্ট হই',
        'contact.desc': 'কম্পেটিটিভ প্রোগ্রামিং, প্রজেক্ট সহযোগিতা এবং আন্তর্জাতিক টেক সুযোগ নিয়ে আলাপ করতে আমি সবসময় প্রস্তুত।',
        'contact.university': 'পিরোজপুর সায়েন্স অ্যান্ড টেকনোলজি ইউনিভার্সিটি',
        'contact.location': 'বরগুনা, বাংলাদেশ',
        'contact.form.name': 'আপনার নাম',
        'contact.form.email': 'আপনার ইমেইল',
        'contact.form.message': 'আপনার বার্তা',
        'contact.form.button': 'বার্তা পাঠান',
        'footer.copy': 'কপিরাইট ২০২৬ শাকিল আহমেদ। সর্বস্বত্ব সংরক্ষিত।',
        'footer.note': 'PrSTU CSE শিক্ষার্থীর গ্লোবাল স্বপ্ন নিয়ে ডিজাইন করা।',
        'alert.fill': 'সব ঘর পূরণ করুন',
        'alert.email': 'সঠিক ইমেইল ঠিকানা দিন',
        'alert.success': 'ধন্যবাদ, {name}! আপনার বার্তা পেয়েছি। শীঘ্রই যোগাযোগ করব।'
    }
};

function setMenuState(isOpen) {
    if (!hamburger || !navMenu) {
        return;
    }

    navMenu.classList.toggle('active', isOpen);
    const spans = hamburger.querySelectorAll('span');
    if (spans.length < 3) {
        return;
    }

    spans[0].style.transform = isOpen ? 'translateY(6px) rotate(45deg)' : 'none';
    spans[1].style.opacity = isOpen ? '0' : '1';
    spans[2].style.transform = isOpen ? 'translateY(-6px) rotate(-45deg)' : 'none';
}

function setActiveNavLink() {
    let current = '';

    sections.forEach((section) => {
        if (window.scrollY >= section.offsetTop - 140) {
            current = section.getAttribute('id') || '';
        }
    });

    navLinks.forEach((link) => {
        const href = link.getAttribute('href') || '';
        link.classList.toggle('active', href === `#${current}`);
    });
}

function applyTheme(theme) {
    const resolvedTheme = theme === 'light' ? 'light' : 'dark';
    document.body.setAttribute('data-theme', resolvedTheme);
    localStorage.setItem('portfolio-theme', resolvedTheme);

    const icon = themeToggle ? themeToggle.querySelector('i') : null;
    const label = themeToggle ? themeToggle.querySelector('span') : null;
    if (icon) {
        icon.className = resolvedTheme === 'dark' ? 'fas fa-moon' : 'fas fa-sun';
    }

    if (label) {
        const lang = localStorage.getItem('portfolio-lang') || 'en';
        const key = resolvedTheme === 'dark' ? 'theme.dark' : 'theme.light';
        label.textContent = translations[lang][key] || translations.en[key];
    }
}

function applyLanguage(lang) {
    const selectedLang = translations[lang] ? lang : 'en';
    const dict = translations[selectedLang];

    document.querySelectorAll('[data-i18n]').forEach((node) => {
        const key = node.getAttribute('data-i18n');
        if (!key || !dict[key]) {
            return;
        }
        node.innerHTML = dict[key];
    });

    document.querySelectorAll('[data-i18n-placeholder]').forEach((node) => {
        const key = node.getAttribute('data-i18n-placeholder');
        if (!key || !dict[key]) {
            return;
        }
        node.setAttribute('placeholder', dict[key]);
    });

    if (languageSelect) {
        languageSelect.value = selectedLang;
    }

    document.documentElement.lang = selectedLang === 'de' ? 'de' : selectedLang === 'bn' ? 'bn' : 'en';
    localStorage.setItem('portfolio-lang', selectedLang);

    const activeTheme = localStorage.getItem('portfolio-theme') || 'dark';
    const themeLabel = themeToggle ? themeToggle.querySelector('span') : null;
    if (themeLabel) {
        const key = activeTheme === 'dark' ? 'theme.dark' : 'theme.light';
        themeLabel.textContent = dict[key] || translations.en[key];
    }
}

if (hamburger && navMenu) {
    hamburger.addEventListener('click', () => {
        const isOpen = !navMenu.classList.contains('active');
        setMenuState(isOpen);
    });
}

navLinks.forEach((link) => {
    link.addEventListener('click', (event) => {
        const href = link.getAttribute('href');
        if (!href || !href.startsWith('#')) {
            return;
        }

        event.preventDefault();
        const target = document.querySelector(href);
        if (!target) {
            return;
        }

        window.scrollTo({
            top: target.offsetTop - 74,
            behavior: 'smooth'
        });

        setMenuState(false);
    });
});

window.addEventListener('scroll', () => {
    if (navbar) {
        navbar.classList.toggle('scrolled', window.scrollY > 20);
    }
    setActiveNavLink();
});

if (themeToggle) {
    themeToggle.addEventListener('click', () => {
        const currentTheme = document.body.getAttribute('data-theme') || 'dark';
        applyTheme(currentTheme === 'dark' ? 'light' : 'dark');
    });
}

if (languageSelect) {
    languageSelect.addEventListener('change', () => {
        applyLanguage(languageSelect.value);
    });
}

if (contactForm) {
    contactForm.addEventListener('submit', (event) => {
        event.preventDefault();

        const lang = localStorage.getItem('portfolio-lang') || 'en';
        const dict = translations[lang] || translations.en;

        const nameInput = document.getElementById('name');
        const emailInput = document.getElementById('email');
        const messageInput = document.getElementById('message');

        if (!nameInput || !emailInput || !messageInput) {
            return;
        }

        const name = nameInput.value.trim();
        const email = emailInput.value.trim();
        const message = messageInput.value.trim();

        if (!name || !email || !message) {
            alert(dict['alert.fill']);
            return;
        }

        const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
        if (!emailRegex.test(email)) {
            alert(dict['alert.email']);
            return;
        }

        alert(dict['alert.success'].replace('{name}', name));
        contactForm.reset();
    });
}

const observer = new IntersectionObserver(
    (entries) => {
        entries.forEach((entry) => {
            if (entry.isIntersecting) {
                entry.target.classList.add('visible');
            }
        });
    },
    { threshold: 0.12 }
);

document.querySelectorAll('.reveal').forEach((element) => {
    observer.observe(element);
});

const savedTheme = localStorage.getItem('portfolio-theme') || 'dark';
const savedLang = localStorage.getItem('portfolio-lang') || 'en';
applyTheme(savedTheme);
applyLanguage(savedLang);
setActiveNavLink();
setMenuState(false);
