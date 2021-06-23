  
const { app, BrowserWindow } = require('electron');
const path = require('path');

if (require('electron-squirrel-startup')) {
  app.quit();
}

const createWindow = () => {
  const mainWindow = new BrowserWindow({
    width: 1040,
    height: 740, minWidth: 800,
    minHeight: 600,
    webPreferences: {
      nodeIntegration: true, contextIsolation: false,
      enableRemoteModule: true,
    }
  });
  mainWindow.removeMenu();
  //mainWindow.webContents.openDevTools();

  mainWindow.loadFile(path.join(__dirname, 'main_menu.html'));
};

app.on('ready', createWindow);

app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit();
  }
});

app.on('activate', () => {
  if (BrowserWindow.getAllWindows().length === 0) {
    createWindow();
  }
});
