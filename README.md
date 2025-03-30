## Step 1: Fork the Repository
1. Go to the repository on GitHub.  
2. Click the **"Fork"** button at the top right to create a copy in your GitHub account.  


## Step 2: Clone the Forked/Original Repository
1. Copy the URL of the forked or shared repository (e.g., `https://github.com/username/repo.git`).  
2. Open a terminal and run the following command to clone the repository:  

   ```bash
   git clone https://github.com/username/repo.git
   ```
3. Navigate into the project directory:  

   ```bash
   cd repo
   ```


## Step 3: Create a New Branch
It’s a good practice to work in a separate branch.  

```bash
git checkout -b upload-file-branch
```


## Step 4: Upload Your File
1. Copy the file you want to upload to the cloned repository folder.  
2. Use the following commands to stage and commit your changes:  

   ```bash
   git add .
   git commit -m "Added [file name] for [purpose/feature]"
   ```
   

## Step 5: Push Your Changes to GitHub
Push your branch to your GitHub repository:  

```bash
git push origin upload-file-branch
```


## Step 6: Create a Pull Request
1. Go to your forked repository on GitHub.  
2. Click on **"Compare & pull request"**.  
3. Add a title and description for your changes.  
4. Click **"Create pull request"**.  


## Step 7: Wait for Review and Approval
The repository owner will review your pull request and may request changes. Once approved, your file will be merged into the shared repository.  


## Troubleshooting
- Make sure you have the correct permissions to fork or push changes.  
- Resolve any merge conflicts before creating a pull request.  
- If your PR is not approved, check for feedback and make necessary changes.  
