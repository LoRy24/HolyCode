const { remote } = require('electron');
const { dialog } = remote;

function openProject() {
    
}

function openFile() {
    const { filePath } = dialog.showOpenDialog({
        title: "Open HC file"
    });

    console.log("File Path: " + filePath);
}