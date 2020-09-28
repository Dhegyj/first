# test
git status //display curent staging area tree
git commit //commit changes to index
git commit -m 'message such as "changed app.js"'
git push //Push to remote repository
git pull //Pull latest changes from remote repository
git clone //Clone repository to new directory
git rm --cached <file>
git add . //adds all files in the current directory
git add *.html // adds all html files in directory to staging area

to leave out files when using command "git add ." create a file called .gitignore and type those files in it
or /directoryname to exclude directories

branches: deafult branch is 'master'
git branch <name> //creates a branch 
git checkout <name> //switches branch
git merge <branchname> //To merge changes in 2 branches
git remote //list remote repositories