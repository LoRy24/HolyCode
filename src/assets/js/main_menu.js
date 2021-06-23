const { remote } = require('electron');
const { dialog } = remote;

var openFilePath;

function openProject() {
    
}

function openFile() {
    const { filePath } = dialog.showOpenDialog({
        title: "Open HC file",

        filters: [
            { name: "HolyC File", extensions: ['hc'] }
        ],
        properties: ["openFile"]
    });

    openFilePath = filePath;
    openFileInEditor();
}

function createNew() {
    
}


// Open an HC file in the Editor
function openFileInEditor() {

}
